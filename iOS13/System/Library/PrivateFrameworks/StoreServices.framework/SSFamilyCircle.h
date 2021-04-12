/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)newCacheRepresentation;
-(id)allITunesIdentifiers;
-(id)allITunesAccountNames;
-(NSArray *)iTunesAccountNames;
-(void)setITunesAccountNames:(NSArray *)arg1 ;
@end

