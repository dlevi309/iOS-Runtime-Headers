/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface _MXExtensionBaseMapResponse : NSObject <NSSecureCoding> {

	NSSet* _namedImages;
	NSSet* _features;

}

@property (nonatomic,copy) NSSet * namedImages;              //@synthesize namedImages=_namedImages - In the implementation block
@property (nonatomic,copy) NSSet * features;                 //@synthesize features=_features - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setNamedImages:(NSSet *)arg1 ;
-(NSSet *)namedImages;
@end

