/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject <CLSRelationable> {

	NSDate* _startTime;
	double _length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double length;                         //@synthesize length=_length - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(void)setLength:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
@end

