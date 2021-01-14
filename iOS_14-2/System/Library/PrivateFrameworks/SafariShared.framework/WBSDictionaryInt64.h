/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying> {

	unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >* _map;

}

@property (nonatomic,readonly) const unordered_map<long long* map; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copy;
-(const unordered_map<long long*)map;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMap:(const unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMovableMap:(unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long> > >*)arg1 ;
@end

