/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardSerializationStorage.h>

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage> {

	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithData:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)currentLength;
-(void)appendData:(id)arg1 ;
-(unsigned long long)estimatedDataLength;
-(id)insertionMarker;
-(void)insertString:(id)arg1 atMarker:(id)arg2 ;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
@end

