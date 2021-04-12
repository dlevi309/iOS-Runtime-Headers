/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardSerializationStorage.h>

@class NSMutableString, NSString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage> {

	NSMutableString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(unsigned long long)estimatedDataLength;
-(unsigned long long)currentLength;
-(id)insertionMarker;
-(void)insertString:(id)arg1 atMarker:(id)arg2 ;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
@end

