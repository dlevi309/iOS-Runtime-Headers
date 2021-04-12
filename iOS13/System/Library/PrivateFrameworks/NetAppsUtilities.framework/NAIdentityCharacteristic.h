/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NAIdentityCharacteristic : NSObject <NAHashable, NAEquatable, NSCopying> {

	/*^block*/id _retrievalBlock;
	/*^block*/id _comparisonBlock;
	/*^block*/id _hashBlock;
	long long _role;

}

@property (nonatomic,copy) id retrievalBlock;                       //@synthesize retrievalBlock=_retrievalBlock - In the implementation block
@property (nonatomic,copy) id comparisonBlock;                      //@synthesize comparisonBlock=_comparisonBlock - In the implementation block
@property (nonatomic,copy) id hashBlock;                            //@synthesize hashBlock=_hashBlock - In the implementation block
@property (assign,nonatomic) long long role;                        //@synthesize role=_role - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)role;
-(void)setRole:(long long)arg1 ;
-(void)setComparisonBlock:(id)arg1 ;
-(void)setHashBlock:(id)arg1 ;
-(id)retrievalBlock;
-(void)setRetrievalBlock:(id)arg1 ;
-(id)comparisonBlock;
-(id)hashBlock;
@end

