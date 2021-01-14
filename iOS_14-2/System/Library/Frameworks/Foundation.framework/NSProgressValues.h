/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface NSProgressValues : NSObject <NSSecureCoding> {

	NSMutableDictionary* _userInfo;
	NSProgressFraction _selfFraction;
	NSProgressFraction _childFraction;
	double _remoteFractionCompleted;
	NSString* _localizedDescription;
	NSString* _localizedAdditionalDescription;
	BOOL _isCancellable;
	BOOL _isPausable;
	BOOL _isCancelled;
	BOOL _isPaused;
	BOOL _usingChildUserInfo;
	NSString* _kind;
	BOOL _isPrioritizable;
	long long _portionOfParent;

}
+(BOOL)supportsSecureCoding;
+(id)_importantKeys;
+(id)decodableClasses;
-(long long)totalUnitCount;
-(id)init;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(BOOL)isFinished;
-(void)setFractionCompleted:(double)arg1 ;
-(id)description;
-(void)setFinished:(BOOL)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(double)fractionCompleted;
-(BOOL)isIndeterminate;
-(NSProgressFraction)overallFraction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)completedUnitCount;
@end

