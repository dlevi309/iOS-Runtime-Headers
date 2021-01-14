/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAIntentGroupProtobufMessage, NSString, NSArray;

@interface SAIntentGroupIntentSearch : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentSearch;
+(id)intentSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAIntentGroupProtobufMessage *)intent;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
@end

