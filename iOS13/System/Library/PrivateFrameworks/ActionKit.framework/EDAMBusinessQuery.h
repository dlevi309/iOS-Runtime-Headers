/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery : FATObject {

	EDAMNoteFilter* _filter;
	NSNumber* _numExperts;
	NSNumber* _includeNotebooks;
	NSNumber* _includeNotesCounts;

}

@property (nonatomic,retain) EDAMNoteFilter * filter;                    //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSNumber * numExperts;                      //@synthesize numExperts=_numExperts - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotebooks;                //@synthesize includeNotebooks=_includeNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeNotesCounts;              //@synthesize includeNotesCounts=_includeNotesCounts - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setFilter:(EDAMNoteFilter *)arg1 ;
-(EDAMNoteFilter *)filter;
-(NSNumber *)includeNotebooks;
-(void)setIncludeNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)numExperts;
-(void)setNumExperts:(NSNumber *)arg1 ;
-(NSNumber *)includeNotesCounts;
-(void)setIncludeNotesCounts:(NSNumber *)arg1 ;
@end

