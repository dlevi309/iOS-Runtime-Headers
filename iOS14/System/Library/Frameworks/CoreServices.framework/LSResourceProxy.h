/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _LSBoundIconInfo, NSDictionary;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding> {

	NSString* _localizedName;
	_LSBoundIconInfo* __boundIconInfo;

}

@property (setter=_setLocalizedName:,nonatomic,copy) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (setter=_setBoundIconInfo:,nonatomic,retain) _LSBoundIconInfo * _boundIconInfo;              //@synthesize _boundIconInfo=__boundIconInfo - In the implementation block
@property (nonatomic,readonly) id<LSIconResourceLocator> iconResourceLocator; 
@property (nonatomic,readonly) BOOL boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
@property (nonatomic,readonly) NSString * primaryIconName; 
@property (assign,nonatomic) unsigned long long propertyListCachingStrategy; 
+(BOOL)supportsSecureCoding;
-(NSString *)localizedName;
-(_LSBoundIconInfo *)_boundIconInfo;
-(NSString *)primaryIconName;
-(BOOL)boundIconIsBadge;
-(id<LSIconResourceLocator>)iconResourceLocator;
-(id)iconDataForVariant:(int)arg1 ;
-(id)iconDataForStyle:(id)arg1 width:(long long)arg2 height:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)_initWithLocalizedName:(id)arg1 ;
-(void)_setLocalizedName:(id)arg1 ;
-(void)_setBoundIconInfo:(id)arg1 ;
-(id)_privateDocumentFileNamesAsCacheKey;
-(void)setPropertyListCachingStrategy:(unsigned long long)arg1 ;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(unsigned long long)propertyListCachingStrategy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSDictionary *)iconsDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

