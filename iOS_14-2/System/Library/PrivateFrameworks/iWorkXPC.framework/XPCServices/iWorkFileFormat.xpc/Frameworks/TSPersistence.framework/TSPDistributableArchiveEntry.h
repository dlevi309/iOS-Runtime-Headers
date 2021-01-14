/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPIdentifiedDataRepresentation.h>

@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {

	long long _identifier;
	NSString* _fileStateIdentifier;
	SFUDataRepresentation* _objectData;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long> >* _ownedIds;
	int _classType;
	unsigned _version;
	NSString* _relativeDataPath;

}

@property (nonatomic,copy) NSString * relativeDataPath;              //@synthesize relativeDataPath=_relativeDataPath - In the implementation block
@property (assign,nonatomic) int classType;                          //@synthesize classType=_classType - In the implementation block
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataRepresentation;
-(int)classType;
-(void)setVersion:(unsigned)arg1 ;
-(long long)identifier;
-(BOOL)isLoaded;
-(id)initWithIdentifier:(long long)arg1 ;
-(unsigned)version;
-(void)dealloc;
-(void)setClassType:(int)arg1 ;
-(void)setFileStateIdentifier:(id)arg1 ;
-(id)fileStateIdentifier;
-(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)ownedIds;
-(BOOL)setDataRepresentation:(id)arg1 shouldCopy:(BOOL)arg2 error:(id*)arg3 ;
-(void)setOwnedIds:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)setRelativeDataPath:(NSString *)arg1 ;
-(NSString *)relativeDataPath;
@end

