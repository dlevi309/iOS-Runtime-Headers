/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)placeResultType;
-(id)encodedClassName;
-(NSData *)resultData;
-(void)setPlaceResultType:(NSString *)arg1 ;
-(void)setResultData:(NSData *)arg1 ;
@end

