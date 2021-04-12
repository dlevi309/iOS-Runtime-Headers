/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)decodableClasses;
+(id)_importantKeys;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(BOOL)isFinished;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(long long)totalUnitCount;
-(id)_indentedDescription:(unsigned long long)arg1 ;
-(NSProgressFraction)overallFraction;
-(BOOL)isIndeterminate;
-(void)setIndeterminate:(BOOL)arg1 ;
-(double)fractionCompleted;
-(void)setFractionCompleted:(double)arg1 ;
-(long long)completedUnitCount;
@end

