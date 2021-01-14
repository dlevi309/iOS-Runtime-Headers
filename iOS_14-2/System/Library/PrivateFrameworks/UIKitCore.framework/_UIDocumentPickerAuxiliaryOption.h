/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {

	BOOL _newlyAdded;
	NSString* _title;
	UIImage* _image;
	NSString* _identifier;
	/*^block*/id _handler;
	unsigned long long _order;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id handler;                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long order;                         //@synthesize order=_order - In the implementation block
@property (assign,getter=isNewlyAdded,nonatomic) BOOL newlyAdded;              //@synthesize newlyAdded=_newlyAdded - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setNewlyAdded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isNewlyAdded;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)handler;
-(NSString *)title;
-(unsigned long long)order;
-(void)setOrder:(unsigned long long)arg1 ;
@end

