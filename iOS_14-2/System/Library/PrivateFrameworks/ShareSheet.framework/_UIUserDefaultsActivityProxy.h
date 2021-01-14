/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface _UIUserDefaultsActivityProxy : NSObject <NSSecureCoding> {

	BOOL _canEdit;
	BOOL _canMove;
	BOOL _canHide;
	BOOL _isHidden;
	NSUUID* _activityUUID;
	NSNumber* _imageSlot;
	NSNumber* _labelSlot;
	double _platterTextHeight;

}

@property (nonatomic,retain) NSUUID * activityUUID;                 //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * imageSlot;                  //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) NSNumber * labelSlot;                  //@synthesize labelSlot=_labelSlot - In the implementation block
@property (assign,nonatomic) BOOL canEdit;                          //@synthesize canEdit=_canEdit - In the implementation block
@property (assign,nonatomic) BOOL canMove;                          //@synthesize canMove=_canMove - In the implementation block
@property (assign,nonatomic) BOOL canHide;                          //@synthesize canHide=_canHide - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                         //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) double platterTextHeight;              //@synthesize platterTextHeight=_platterTextHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isHidden;
-(NSUUID *)activityUUID;
-(void)setActivityUUID:(NSUUID *)arg1 ;
-(BOOL)canHide;
-(BOOL)canMove;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)canEdit;
-(double)platterTextHeight;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(void)setLabelSlot:(NSNumber *)arg1 ;
-(void)setCanEdit:(BOOL)arg1 ;
-(void)setCanMove:(BOOL)arg1 ;
-(void)setCanHide:(BOOL)arg1 ;
-(void)setPlatterTextHeight:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(NSNumber *)imageSlot;
-(NSNumber *)labelSlot;
@end

