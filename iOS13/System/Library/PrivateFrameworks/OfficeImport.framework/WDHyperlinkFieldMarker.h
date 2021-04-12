/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

@interface WDHyperlinkFieldMarker : WDFieldMarker {

	NSString* mLink;
	NSString* mFragment;
	unsigned mInternalLink : 1;

}

@property (nonatomic,retain) NSString * link; 
@property (nonatomic,retain) NSString * fragment; 
@property (assign,nonatomic) BOOL internalLink; 
-(id)description;
-(NSString *)fragment;
-(void)setFragment:(NSString *)arg1 ;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(BOOL)internalLink;
-(int)runType;
-(void)setInternalLink:(BOOL)arg1 ;
@end

