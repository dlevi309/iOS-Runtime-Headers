/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)jsonData;
-(void)setJsonData:(NSString *)arg1 ;
-(void)setMetadataType:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(NSString *)metadataType;
-(long long)version;
@end

