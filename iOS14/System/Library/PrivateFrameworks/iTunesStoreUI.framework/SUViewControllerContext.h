/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface SUViewControllerContext : NSObject <NSSecureCoding> {

	NSMutableDictionary* _metadata;
	NSString* _sectionIdentifier;
	long long _type;

}

@property (nonatomic,retain) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyViewController;
-(long long)_typeForTypeString:(id)arg1 ;
-(id)_typeStringForType:(long long)arg1 ;
@end

