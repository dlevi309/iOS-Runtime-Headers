/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDHint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint, NSSecureCoding> {

	CGRect mBounds;
	unsigned long long mEdges;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long edges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)archivedHintClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)bounds;
-(unsigned long long)edges;
-(id)initWithBounds:(CGRect)arg1 edges:(unsigned long long)arg2 ;
-(BOOL)isLastPartitionHorizontally:(BOOL)arg1 ;
-(BOOL)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
@end

