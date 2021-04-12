/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSArray, NSString;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL allowsPunchOut; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSArray * intentSlotKeyPaths; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (assign,nonatomic) BOOL shouldRunHandleIntent; 
+(id)processIntent;
+(id)processIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
-(BOOL)allowsPunchOut;
-(void)setAllowsPunchOut:(BOOL)arg1 ;
-(BOOL)shouldRunHandleIntent;
-(void)setShouldRunHandleIntent:(BOOL)arg1 ;
@end

