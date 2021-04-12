/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHead:(OADLineEnd *)arg1 ;
-(void)setTail:(OADLineEnd *)arg1 ;
-(OADLineEnd *)tail;
-(id)fill;
-(float)width;
-(unsigned char)cap;
-(id)join;
-(id)init;
-(OADLineEnd *)head;
-(id)color;
-(void)setWidth:(float)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)dash;
-(unsigned long long)hash;
-(void)setDash:(id)arg1 ;
-(void)setCap:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(unsigned char)compoundType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCompoundType:(unsigned char)arg1 ;
-(void)setJoin:(id)arg1 ;
-(BOOL)isWidthOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isDashOverridden;
-(BOOL)isCompoundTypeOverridden;
-(void)setFill:(id)arg1 ;
-(void)setPenAlignment:(int)arg1 ;
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

