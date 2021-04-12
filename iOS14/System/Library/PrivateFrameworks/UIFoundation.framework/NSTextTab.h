/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	double _location;
	id _reserved;

}

@property (nonatomic,readonly) long long alignment; 
@property (nonatomic,readonly) double location; 
@property (nonatomic,readonly) NSDictionary * options; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)columnTerminatorsForLocale:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)init;
-(long long)alignment;
-(double)location;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(id)description;
-(unsigned long long)tabStopType;
-(id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 location:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

