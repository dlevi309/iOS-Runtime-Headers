/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {

	NSMutableArray* _itemIDs;
	NSMutableArray* _idTypes;

}

@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)enumerateCloudItemIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
@end

