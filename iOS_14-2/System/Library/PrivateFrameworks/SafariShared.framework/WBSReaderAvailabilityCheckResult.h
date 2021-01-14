/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readerAvailable;
	BOOL _isSameDocumentNavigation;
	NSArray* _textSamples;

}

@property (assign,getter=isReaderAvailable,nonatomic) BOOL readerAvailable;              //@synthesize readerAvailable=_readerAvailable - In the implementation block
@property (assign,nonatomic) BOOL isSameDocumentNavigation;                              //@synthesize isSameDocumentNavigation=_isSameDocumentNavigation - In the implementation block
@property (nonatomic,copy) NSArray * textSamples;                                        //@synthesize textSamples=_textSamples - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)textSamples;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setReaderAvailable:(BOOL)arg1 ;
-(id)description;
-(void)setTextSamples:(NSArray *)arg1 ;
-(BOOL)isSameDocumentNavigation;
-(void)setIsSameDocumentNavigation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isReaderAvailable;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

