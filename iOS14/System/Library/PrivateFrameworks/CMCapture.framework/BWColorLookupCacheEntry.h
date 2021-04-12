/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSData;

@interface BWColorLookupCacheEntry : NSObject {

	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;

}

@property (nonatomic,retain,readonly) NSData * foregroundColorLookupTable;              //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * backgroundColorLookupTable;              //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
-(NSData *)backgroundColorLookupTable;
-(NSData *)foregroundColorLookupTable;
-(id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2 ;
-(void)dealloc;
@end

