/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol NSTextLocation;
@interface NSTextRange : NSObject {

	id<NSTextLocation> _location;
	id<NSTextLocation> _terminator;

}

@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) id<NSTextLocation> location;                //@synthesize location=_location - In the implementation block
@property (readonly) id<NSTextLocation> terminator;              //@synthesize terminator=_terminator - In the implementation block
-(void)dealloc;
-(BOOL)isEmpty;
-(id<NSTextLocation>)location;
-(id<NSTextLocation>)terminator;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 terminator:(id)arg2 ;
-(id)initWithLocation:(id)arg1 ;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)startLocation;
-(id)endLocation;
@end

