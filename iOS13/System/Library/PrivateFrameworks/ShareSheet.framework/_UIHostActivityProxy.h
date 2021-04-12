/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface _UIHostActivityProxy : NSObject <NSSecureCoding> {

	BOOL _disabled;
	BOOL _favorite;
	BOOL _restricted;
	NSUUID* _proxyIdentifier;
	NSNumber* _imageSlot;
	NSNumber* _labelSlot;
	double _platterTextHeight;

}

@property (nonatomic,retain) NSUUID * proxyIdentifier;                         //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * imageSlot;                             //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) NSNumber * labelSlot;                             //@synthesize labelSlot=_labelSlot - In the implementation block
@property (assign,nonatomic) double platterTextHeight;                         //@synthesize platterTextHeight=_platterTextHeight - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                  //@synthesize favorite=_favorite - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(NSUUID *)proxyIdentifier;
-(void)setProxyIdentifier:(NSUUID *)arg1 ;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(void)setFavorite:(BOOL)arg1 ;
-(double)platterTextHeight;
-(NSNumber *)imageSlot;
-(NSNumber *)labelSlot;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(void)setLabelSlot:(NSNumber *)arg1 ;
-(void)setPlatterTextHeight:(double)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
@end

