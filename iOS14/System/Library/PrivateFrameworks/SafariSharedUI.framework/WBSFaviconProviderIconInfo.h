/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSString, NSDate;

@interface WBSFaviconProviderIconInfo : NSObject {

	BOOL _hasGeneratedResolutions;
	BOOL _isRejectedResource;
	NSString* _pageURLString;
	NSString* _iconURLString;
	NSString* _UUIDString;
	NSDate* _dateAdded;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSString * pageURLString;              //@synthesize pageURLString=_pageURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconURLString;              //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUIDString;                 //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                         //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasGeneratedResolutions;               //@synthesize hasGeneratedResolutions=_hasGeneratedResolutions - In the implementation block
@property (nonatomic,readonly) BOOL isRejectedResource;                    //@synthesize isRejectedResource=_isRejectedResource - In the implementation block
-(id)init;
-(CGSize)size;
-(NSString *)UUIDString;
-(NSDate *)dateAdded;
-(NSString *)iconURLString;
-(BOOL)isRejectedResource;
-(BOOL)hasGeneratedResolutions;
-(id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(CGSize)arg5 hasGeneratedResolutions:(BOOL)arg6 isRejectedResource:(BOOL)arg7 ;
-(NSString *)pageURLString;
@end

