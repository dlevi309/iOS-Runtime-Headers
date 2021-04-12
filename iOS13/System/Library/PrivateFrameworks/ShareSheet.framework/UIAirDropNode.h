/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject <NSSecureCoding> {

	BOOL _wantsTwoLines;
	BOOL _hasSquareImage;
	BOOL _magicHead;
	BOOL _disabled;
	BOOL _restricted;
	NSNumber* _imageSlot;
	NSNumber* _mainLabelSlot;
	NSNumber* _topLabelSlot;
	NSNumber* _bottomLabelSlot;
	NSNumber* _transportSlot;
	NSUUID* _nodeIdentifier;
	long long _selectionReason;

}

@property (retain) NSNumber * imageSlot;                                       //@synthesize imageSlot=_imageSlot - In the implementation block
@property (retain) NSNumber * transportSlot;                                   //@synthesize transportSlot=_transportSlot - In the implementation block
@property (retain) NSNumber * mainLabelSlot;                                   //@synthesize mainLabelSlot=_mainLabelSlot - In the implementation block
@property (retain) NSNumber * topLabelSlot;                                    //@synthesize topLabelSlot=_topLabelSlot - In the implementation block
@property (retain) NSNumber * bottomLabelSlot;                                 //@synthesize bottomLabelSlot=_bottomLabelSlot - In the implementation block
@property (retain) NSUUID * nodeIdentifier;                                    //@synthesize nodeIdentifier=_nodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsTwoLines;                               //@synthesize wantsTwoLines=_wantsTwoLines - In the implementation block
@property (assign,nonatomic) BOOL hasSquareImage;                              //@synthesize hasSquareImage=_hasSquareImage - In the implementation block
@property (assign,nonatomic) BOOL magicHead;                                   //@synthesize magicHead=_magicHead - In the implementation block
@property (assign,nonatomic) long long selectionReason;                        //@synthesize selectionReason=_selectionReason - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setNodeIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)nodeIdentifier;
-(long long)selectionReason;
-(void)setSelectionReason:(long long)arg1 ;
-(NSNumber *)imageSlot;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(BOOL)hasSquareImage;
-(NSNumber *)mainLabelSlot;
-(NSNumber *)transportSlot;
-(NSNumber *)bottomLabelSlot;
-(BOOL)wantsTwoLines;
-(BOOL)magicHead;
-(void)setMagicHead:(BOOL)arg1 ;
-(void)setTopLabelSlot:(NSNumber *)arg1 ;
-(void)setMainLabelSlot:(NSNumber *)arg1 ;
-(void)setBottomLabelSlot:(NSNumber *)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setTransportSlot:(NSNumber *)arg1 ;
-(NSNumber *)topLabelSlot;
-(void)setWantsTwoLines:(BOOL)arg1 ;
-(void)setHasSquareImage:(BOOL)arg1 ;
@end

