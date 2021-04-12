/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, UIImage;

@interface _MXExtensionBaseMapNamedImage : NSObject <NSSecureCoding> {

	NSString* _name;
	NSData* _data;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSData * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) UIImage * image; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
@end

