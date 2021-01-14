/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SAIntentGroupProtobufMessage *)intent;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(BOOL)allowsPunchOut;
-(void)setAllowsPunchOut:(BOOL)arg1 ;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(BOOL)shouldRunHandleIntent;
-(void)setShouldRunHandleIntent:(BOOL)arg1 ;
-(BOOL)mutatingCommand;
-(NSArray *)intentSlotKeyPaths;
-(void)setIntentSlotKeyPaths:(NSArray *)arg1 ;
@end

