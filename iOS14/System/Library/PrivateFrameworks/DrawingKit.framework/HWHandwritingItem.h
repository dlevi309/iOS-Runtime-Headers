/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DKDrawing;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSDate* _creationDate;
	DKDrawing* _drawing;

}

@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) DKDrawing * drawing;                //@synthesize drawing=_drawing - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uuid;
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(DKDrawing *)drawing;
-(id)initWithDrawing:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDrawing:(DKDrawing *)arg1 ;
@end

