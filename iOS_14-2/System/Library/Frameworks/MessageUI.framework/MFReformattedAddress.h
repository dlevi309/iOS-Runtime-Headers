/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFReformattedAddress : NSObject {

	NSString* _address;
	NSRange _middleTruncationRange;

}

@property (nonatomic,readonly) NSString * localPart; 
@property (nonatomic,readonly) NSString * domainPart; 
@property (assign,nonatomic) NSRange middleTruncationRange;              //@synthesize middleTruncationRange=_middleTruncationRange - In the implementation block
-(id)initWithAddress:(id)arg1 ;
-(id)description;
-(NSString *)localPart;
-(NSString *)domainPart;
-(id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3 ;
-(void)setMiddleTruncationRange:(NSRange)arg1 ;
-(NSRange)middleTruncationRange;
@end

