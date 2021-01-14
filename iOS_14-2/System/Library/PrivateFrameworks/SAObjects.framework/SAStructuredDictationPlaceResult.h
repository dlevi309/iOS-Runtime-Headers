/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSData;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * placeResultType; 
@property (nonatomic,copy) NSData * resultData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationPlaceResult;
+(id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setPlaceResultType:(NSString *)arg1 ;
-(void)setResultData:(NSData *)arg1 ;
-(NSString *)placeResultType;
-(NSData *)resultData;
@end

