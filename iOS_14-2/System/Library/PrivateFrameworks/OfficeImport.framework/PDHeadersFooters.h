/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)footer;
-(void)setHeader:(id)arg1 ;
-(id)header;
-(void)setFooter:(id)arg1 ;
-(BOOL)hasHeader;
-(BOOL)hasDateTime;
-(void)setHasHeader:(BOOL)arg1 ;
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

