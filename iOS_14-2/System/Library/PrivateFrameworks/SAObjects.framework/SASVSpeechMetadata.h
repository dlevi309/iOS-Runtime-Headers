/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASVSpeechMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phraseDataList; 
@property (nonatomic,copy) NSString * preITN; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechMetadata;
+(id)speechMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)preITN;
-(NSArray *)phraseDataList;
-(void)setPreITN:(NSString *)arg1 ;
-(void)setPhraseDataList:(NSArray *)arg1 ;
@end

