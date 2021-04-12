/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSArray *)images;
-(id)initWithID:(id)arg1 images:(id)arg2 ;
@end

