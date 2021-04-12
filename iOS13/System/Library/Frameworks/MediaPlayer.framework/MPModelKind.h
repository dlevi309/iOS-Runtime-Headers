/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding> {

	Class _modelClass;

}

@property (nonatomic,readonly) Class modelClass;                         //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,readonly) MPModelKind * identityKind; 
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithModelClass:(Class)arg1 ;
+(id)kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelKind *)identityKind;
-(NSString *)humanDescription;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(id)_initWithModelClass:(Class)arg1 ;
-(Class)modelClass;
@end

