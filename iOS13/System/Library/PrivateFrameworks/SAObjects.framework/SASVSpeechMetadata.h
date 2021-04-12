/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)phraseDataList;
-(void)setPhraseDataList:(NSArray *)arg1 ;
-(NSString *)preITN;
-(void)setPreITN:(NSString *)arg1 ;
@end

