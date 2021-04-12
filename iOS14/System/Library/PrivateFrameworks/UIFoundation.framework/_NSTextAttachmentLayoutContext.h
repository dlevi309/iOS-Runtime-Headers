/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol NSTextLocation;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSDictionary, NSTextAttachment;

@interface _NSTextAttachmentLayoutContext : NSObject {

	id<NSTextLocation> _location;
	NSDictionary* _attributes;
	NSTextAttachment* _textAttachment;
	CTRunDelegateRef _runDelegate;
	CGRect _bounds;
	CGRect _proposedLineFragment;
	BOOL _isBoundsValid;
	BOOL _isLineFragmentLayout;

}

@property (readonly) id<NSTextLocation> location;                     //@synthesize location=_location - In the implementation block
@property (copy,readonly) NSDictionary * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSTextAttachment * textAttachment;               //@synthesize textAttachment=_textAttachment - In the implementation block
@property (readonly) const CTRunDelegateRef runDelegate; 
@property (assign) CGRect proposedLineFragment; 
-(id<NSTextLocation>)location;
-(void)_queryLayout;
-(CGRect)proposedLineFragment;
-(void)setProposedLineFragment:(CGRect)arg1 ;
-(NSDictionary *)attributes;
-(NSTextAttachment *)textAttachment;
-(const CTRunDelegateRef)runDelegate;
-(id)initWithLocation:(id)arg1 attributes:(id)arg2 ;
-(void)dealloc;
@end

