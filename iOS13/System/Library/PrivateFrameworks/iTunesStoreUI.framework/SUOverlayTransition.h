/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying> {

	double _duration;
	SUDOMElement* _sourceElement;
	long long _type;

}

@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceElement;              //@synthesize sourceElement=_sourceElement - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)transitionTypeFromString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(SUDOMElement *)sourceElement;
-(void)setSourceElement:(SUDOMElement *)arg1 ;
@end

