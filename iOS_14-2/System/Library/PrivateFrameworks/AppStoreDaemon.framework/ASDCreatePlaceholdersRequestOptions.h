/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions {

	BOOL _completeDataPromise;
	BOOL _createAsMobileBackup;
	NSArray* _items;

}

@property (assign,nonatomic) BOOL completeDataPromise;               //@synthesize completeDataPromise=_completeDataPromise - In the implementation block
@property (assign,nonatomic) BOOL createAsMobileBackup;              //@synthesize createAsMobileBackup=_createAsMobileBackup - In the implementation block
@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)items;
-(id)initWithApplicationMetadata:(id)arg1 ;
-(BOOL)completeDataPromise;
-(void)setCompleteDataPromise:(BOOL)arg1 ;
-(BOOL)createAsMobileBackup;
-(void)setCreateAsMobileBackup:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

