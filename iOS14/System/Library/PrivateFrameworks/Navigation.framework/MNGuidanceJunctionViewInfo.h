/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray;

@interface MNGuidanceJunctionViewInfo : NSObject <NSSecureCoding> {

	NSUUID* _uniqueID;
	NSArray* _images;

}

@property (nonatomic,readonly) NSUUID * uniqueID;              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * images;               //@synthesize images=_images - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)images;
-(id)initWithID:(id)arg1 images:(id)arg2 ;
@end

