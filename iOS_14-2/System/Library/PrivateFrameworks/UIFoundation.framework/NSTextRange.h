/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol NSTextLocation;
@interface NSTextRange : NSObject {

	id<NSTextLocation> _location;
	id<NSTextLocation> _endLocation;

}

@property (getter=isEmpty,readonly) BOOL empty; 
@property (readonly) id<NSTextLocation> location;                 //@synthesize location=_location - In the implementation block
@property (readonly) id<NSTextLocation> endLocation;              //@synthesize endLocation=_endLocation - In the implementation block
-(id<NSTextLocation>)endLocation;
-(id<NSTextLocation>)location;
-(id)shortDescription;
-(id)initWithLocation:(id)arg1 ;
-(id)description;
-(BOOL)containsRange:(id)arg1 ;
-(id)initWithLocation:(id)arg1 endLocation:(id)arg2 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToTextRange:(id)arg1 ;
-(id)textRangeByFormingUnionWithTextRange:(id)arg1 ;
-(BOOL)intersectsWithTextRange:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)terminator;
@end

