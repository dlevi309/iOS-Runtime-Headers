/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface PDHeadersFooters : NSObject {

	BOOL mHasDateTime;
	BOOL mHasNowDateTime;
	BOOL mHasUserDateTime;
	BOOL mHasSlideNumber;
	BOOL mHasHeader;
	BOOL mHasFooter;
	int mDateTimeFormat;
	NSString* mUserDateTime;
	NSString* mHeader;
	NSString* mFooter;

}
-(id)header;
-(void)setHeader:(id)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
-(BOOL)hasHeader;
-(void)setHasHeader:(BOOL)arg1 ;
-(BOOL)hasDateTime;
-(BOOL)hasFooter;
-(void)setHasDateTime:(BOOL)arg1 ;
-(BOOL)hasNowDateTime;
-(void)setHasNowDateTime:(BOOL)arg1 ;
-(BOOL)hasUserDateTime;
-(void)setHasUserDateTime:(BOOL)arg1 ;
-(BOOL)hasSlideNumber;
-(void)setHasSlideNumber:(BOOL)arg1 ;
-(void)setHasFooter:(BOOL)arg1 ;
-(id)userDateTime;
-(void)setUserDateTime:(id)arg1 ;
@end

