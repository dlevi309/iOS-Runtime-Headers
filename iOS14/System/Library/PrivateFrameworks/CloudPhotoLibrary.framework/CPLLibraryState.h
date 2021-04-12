/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying> {

	BOOL _disabled;
	NSDate* _disabledDate;
	NSDate* _deleteDate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSDate * disabledDate;                          //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,copy) NSDate * deleteDate;                            //@synthesize deleteDate=_deleteDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDisabled;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)disabledDate;
-(NSDate *)deleteDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(void)setDeleteDate:(NSDate *)arg1 ;
@end

