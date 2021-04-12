/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sectionIdentifier;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(id)copyViewController;
-(long long)_typeForTypeString:(id)arg1 ;
-(id)_typeStringForType:(long long)arg1 ;
@end

