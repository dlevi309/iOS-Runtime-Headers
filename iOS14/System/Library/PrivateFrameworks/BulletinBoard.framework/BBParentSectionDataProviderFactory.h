/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {

	BBSectionInfo* _sectionInfo;
	NSString* _universalSectionIdentifier;

}

@property (nonatomic,copy) BBSectionInfo * sectionInfo;                        //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;              //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)factoryFromSectionInfo:(id)arg1 ;
-(id)sectionIdentifier;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(NSString *)universalSectionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(id)sectionIcon;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSectionInfo:(id)arg1 ;
-(id)dataProviders;
-(id)sectionDisplayName;
@end

