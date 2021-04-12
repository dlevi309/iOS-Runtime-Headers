/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)order;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(BOOL)isNewlyAdded;
-(void)setNewlyAdded:(BOOL)arg1 ;
@end

