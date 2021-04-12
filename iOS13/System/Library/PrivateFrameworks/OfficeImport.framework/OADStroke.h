/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor, OADFill, OADDash, OADLineJoin, OADLineEnd;

@interface OADStroke : OADProperties <NSCopying> {

	OADColor* mColor;
	OADFill* mFill;
	OADDash* mDash;
	OADLineJoin* mJoin;
	OADLineEnd* mHead;
	OADLineEnd* mTail;
	float mWidth;
	unsigned char mCap;
	unsigned char mCompoundType;
	int mPenAlignment;
	unsigned mIsColorOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsCapOverridden : 1;
	unsigned mIsCompoundTypeOverridden : 1;
	unsigned mIsPenAlignmentOverridden : 1;

}

@property (nonatomic,retain) OADLineEnd * head; 
@property (nonatomic,retain) OADLineEnd * tail; 
+(id)defaultProperties;
+(id)nullStroke;
+(id)blackStroke;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParent:(id)arg1 ;
-(OADLineEnd *)head;
-(OADLineEnd *)tail;
-(float)width;
-(id)color;
-(void)setWidth:(float)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)fill;
-(id)initWithDefaults;
-(unsigned char)compoundType;
-(void)setCompoundType:(unsigned char)arg1 ;
-(void)setTail:(OADLineEnd *)arg1 ;
-(void)setHead:(OADLineEnd *)arg1 ;
-(id)join;
-(void)setJoin:(id)arg1 ;
-(unsigned char)cap;
-(void)setCap:(unsigned char)arg1 ;
-(void)setFill:(id)arg1 ;
-(BOOL)isWidthOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isDashOverridden;
-(id)dash;
-(BOOL)isCompoundTypeOverridden;
-(void)setPenAlignment:(int)arg1 ;
-(void)setDash:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)isCapOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isJoinOverridden;
-(BOOL)isPenAlignmentOverridden;
-(BOOL)isHeadOverridden;
-(BOOL)isTailOverridden;
-(int)penAlignment;
@end

