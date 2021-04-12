/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _peopleSuggestion;
	NSNumber* _imageSlot;
	NSNumber* _mainLabelSlot;
	NSNumber* _topLabelSlot;
	NSNumber* _bottomLabelSlot;
	NSNumber* _transportSlot;
	NSUUID* _nodeIdentifier;
	long long _selectionReason;

}

@property (retain) NSNumber * imageSlot;                                                   //@synthesize imageSlot=_imageSlot - In the implementation block
@property (retain) NSNumber * transportSlot;                                               //@synthesize transportSlot=_transportSlot - In the implementation block
@property (assign,getter=isPeopleSuggestion,nonatomic) BOOL peopleSuggestion;              //@synthesize peopleSuggestion=_peopleSuggestion - In the implementation block
@property (retain) NSNumber * mainLabelSlot;                                               //@synthesize mainLabelSlot=_mainLabelSlot - In the implementation block
@property (retain) NSNumber * topLabelSlot;                                                //@synthesize topLabelSlot=_topLabelSlot - In the implementation block
@property (retain) NSNumber * bottomLabelSlot;                                             //@synthesize bottomLabelSlot=_bottomLabelSlot - In the implementation block
@property (retain) NSUUID * nodeIdentifier;                                                //@synthesize nodeIdentifier=_nodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsTwoLines;                                           //@synthesize wantsTwoLines=_wantsTwoLines - In the implementation block
@property (assign,nonatomic) BOOL hasSquareImage;                                          //@synthesize hasSquareImage=_hasSquareImage - In the implementation block
@property (assign,nonatomic) BOOL magicHead;                                               //@synthesize magicHead=_magicHead - In the implementation block
@property (assign,nonatomic) long long selectionReason;                                    //@synthesize selectionReason=_selectionReason - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                              //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                          //@synthesize restricted=_restricted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3 isPeopleSuggestion:(BOOL)arg4 ;
-(BOOL)isRestricted;
-(void)setDisabled:(BOOL)arg1 ;
-(NSUUID *)nodeIdentifier;
-(void)setRestricted:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDisabled;
-(NSNumber *)topLabelSlot;
-(void)setTransportSlot:(NSNumber *)arg1 ;
-(void)setPeopleSuggestion:(BOOL)arg1 ;
-(void)setWantsTwoLines:(BOOL)arg1 ;
-(void)setHasSquareImage:(BOOL)arg1 ;
-(id)description;
-(BOOL)magicHead;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(void)setNodeIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)selectionReason;
-(void)setSelectionReason:(long long)arg1 ;
-(BOOL)hasSquareImage;
-(NSNumber *)mainLabelSlot;
-(NSNumber *)transportSlot;
-(NSNumber *)bottomLabelSlot;
-(BOOL)wantsTwoLines;
-(void)setMagicHead:(BOOL)arg1 ;
-(BOOL)isPeopleSuggestion;
-(void)setTopLabelSlot:(NSNumber *)arg1 ;
-(void)setMainLabelSlot:(NSNumber *)arg1 ;
-(void)setBottomLabelSlot:(NSNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)imageSlot;
@end

