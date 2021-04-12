/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)fragment;
-(void)setFragment:(NSString *)arg1 ;
-(id)description;
-(int)runType;
-(BOOL)internalLink;
-(void)setInternalLink:(BOOL)arg1 ;
@end

