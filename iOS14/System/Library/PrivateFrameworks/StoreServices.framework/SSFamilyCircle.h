/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding> {

	NSArray* _familyMembers;
	NSArray* _iTunesAccountNames;

}

@property (nonatomic,retain) NSArray * familyMembers;                   //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) NSArray * iTunesAccountNames;              //@synthesize iTunesAccountNames=_iTunesAccountNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)arg1 ;
-(NSArray *)familyMembers;
@end

