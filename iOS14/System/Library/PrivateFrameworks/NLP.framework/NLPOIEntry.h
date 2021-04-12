/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
*/

#import <NLP/NLParsecNamedEntity.h>

@class NSString, NLPOIEntryImpl;

@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {

	NLPOIEntryImpl* m_impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)score;
-(unsigned char)category;
-(NSString *)name;
-(id)initWithProtoBuf:(id)arg1 ;
-(void)dealloc;
@end

