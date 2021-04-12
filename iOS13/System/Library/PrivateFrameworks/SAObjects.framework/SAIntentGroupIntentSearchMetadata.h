/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupIntentSearchMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * jsonData; 
@property (nonatomic,copy) NSString * metadataType; 
@property (assign,nonatomic) long long version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intentSearchMetadata;
+(id)intentSearchMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)metadataType;
-(NSString *)jsonData;
-(id)encodedClassName;
-(void)setJsonData:(NSString *)arg1 ;
-(void)setMetadataType:(NSString *)arg1 ;
@end

