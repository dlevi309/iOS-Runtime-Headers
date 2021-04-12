/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface ASCArtwork : NSObject <NSSecureCoding, NSCopying> {

	double _width;
	double _height;
	NSString* _decoration;
	NSString* _preferredCrop;
	NSString* _preferredFormat;
	id _dataSource;

}

@property (nonatomic,readonly) id dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIImage * embeddedImage; 
@property (nonatomic,copy,readonly) NSString * URLTemplate; 
@property (nonatomic,readonly) double width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSString * decoration;                   //@synthesize decoration=_decoration - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredCrop;                //@synthesize preferredCrop=_preferredCrop - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)width;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dataSource;
-(double)height;
-(NSString *)decoration;
-(id)description;
-(NSString *)URLTemplate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)preferredFormat;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)preferredCrop;
-(id)makeURLWithSubstitutions:(id)arg1 ;
-(UIImage *)embeddedImage;
-(id)initWithURLTemplate:(id)arg1 width:(double)arg2 height:(double)arg3 decoration:(id)arg4 preferredCrop:(id)arg5 preferredFormat:(id)arg6 ;
-(id)initWithImage:(id)arg1 decoration:(id)arg2 ;
@end

