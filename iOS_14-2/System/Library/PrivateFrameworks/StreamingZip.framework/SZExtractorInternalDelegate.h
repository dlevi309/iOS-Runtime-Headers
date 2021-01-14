/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
*/

#import <StreamingZip/StreamingUnzipDelegateProtocol.h>

@protocol SZExtractorDelegate;
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {

	id<SZExtractorDelegate> delegate;

}

@property (__weak) id<SZExtractorDelegate> delegate; 
-(id<SZExtractorDelegate>)delegate;
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
@end

