/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString;

@interface PXMemoriesTitleHelper : NSObject {

	NSString* _softLineBreak;
	NSString* _truncationToken;
	long long _preferredLineLength;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) NSString * softLineBreak;                     //@synthesize softLineBreak=_softLineBreak - In the implementation block
@property (nonatomic,copy) NSString * truncationToken;                   //@synthesize truncationToken=_truncationToken - In the implementation block
@property (assign,nonatomic) long long preferredLineLength;              //@synthesize preferredLineLength=_preferredLineLength - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                  //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
+(id)defaultHelper;
-(id)init;
-(void)setPreferredLineLength:(long long)arg1 ;
-(NSString *)softLineBreak;
-(id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(unsigned long long)arg3 ;
-(NSString *)truncationToken;
-(id)displayableTextForTitle:(id)arg1 intent:(long long)arg2 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setSoftLineBreak:(NSString *)arg1 ;
-(void)setTruncationToken:(NSString *)arg1 ;
-(long long)preferredLineLength;
-(BOOL)_isTextLongerThanPreferredLine:(id)arg1 range:(NSRange)arg2 minimumScaleFactor:(double)arg3 ;
-(double)minimumScaleFactor;
@end

