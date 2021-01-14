/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOFeatureStyleAttributes, NSMutableData, NSData, NSString, NSMutableOrderedSet, NSMutableArray, NSMutableDictionary;

@interface GEOVectorTile : NSObject {

	GEOTileKey _key;
	GEOFeatureStyleAttributes* _attributes;
	SCD_Struct_GE77* _lines;
	unsigned long long _linesCount;
	unsigned long long _linesVertexCount;
	SCD_Struct_GE144* _linesLabelAnnotations;
	unsigned long long _linesLabelAnnotationCount;
	SCD_Struct_GE145* _linesAnnotationBezierVertices;
	SCD_Struct_GE77* _coastlines;
	unsigned long long _coastlinesCount;
	SCD_Struct_GE146* _polygons;
	unsigned long long _polygonsCount;
	unsigned long long _polygonsVertexCount;
	SCD_Struct_GE34* _polygonLabelPositions;
	unsigned long long _polygonLabelPositionsCount;
	unsigned long long _venuesCount;
	SCD_Struct_GE147* _venues;
	unsigned long long _venueSectionsCount;
	unsigned long long _venueBuildingsCount;
	SCD_Struct_GE148* _venueBuildings;
	unsigned long long _venueLevelsCount;
	SCD_Struct_GE149* _venueLevels;
	unsigned long long _venueComponentsCount;
	SCD_Struct_GE150* _venueComponents;
	SCD_Struct_GE112* _buildingFootprints;
	NSMutableData* _extrusionHeightsPool;
	NSMutableData* _baseHeightsPool;
	unsigned long long _buildingFootprintsCount;
	SCD_Struct_GE112* _overlapBuildingFootprints;
	unsigned long long _overlapBuildingFootprintsCount;
	SCD_Struct_GE112* _hiResBuildingFootprints;
	unsigned long long _hiResBuildingFootprintsCount;
	SCD_Struct_GE151* _threeDBuildings;
	unsigned long long _threeDBuildingsCount;
	SCD_Struct_GE151* _overlapThreeDBuildings;
	unsigned long long _overlapThreeDBuildingsCount;
	SCD_Struct_GE35* _pois;
	unsigned long long _poisCount;
	SCD_Struct_GE152* _labelTextPlacements;
	unsigned _labelTextPlacementsCount;
	SCD_Struct_GE153* _overpasses;
	SCD_Struct_GE139* _junctions;
	unsigned long long _junctionsCount;
	BOOL _hasComputedJunctions;
	SCD_Struct_GE154* _laneConnections;
	unsigned long long _laneConnectionsCount;
	SCD_Struct_GE154* _pointsOnRoad;
	unsigned long long _pointsOnRoadCount;
	/*function pointer*/void** _sortedPointsOnRoad;
	unsigned long long _lineCrossingsCount;
	SCD_Struct_GE155* _lineCrossings;
	SCD_Struct_GE156* _laneGeometry;
	SCD_Struct_GE157* _curveLineVertices;
	unsigned* _curveToLineMapping;
	SCD_Struct_GE145* _lineVertices;
	SCD_Struct_GE145* _polygonVertices;
	SCD_Struct_GE145* _coastlineVertices;
	SCD_Struct_GE145* _footprintVertices;
	SCD_Struct_GE145* _overlapFootprintVertices;
	SCD_Struct_GE145* _hiResFootprintVertices;
	SCD_Struct_GE145* _venuesVertices;
	/*function pointer*/void** _venuesSections;
	NSData* _labelPool;
	SCD_Struct_GE158* _labelPoolLanguages;
	unsigned long long _labelPoolLanguagesLength;
	NSData* _localizedLabelLanguagePool;
	NSData* _localizedLabelPool;
	NSString* _preferredLocalizedLabelLanguage;
	char* _localizedLabelsLanguage;
	NSData* _dualLanguageLabelPool;
	SCD_Struct_GE159* _labelIndex;
	unsigned long long _labelIndexCount;
	GEOFeatureShield* _shieldIndex;
	unsigned long long _shieldIndexCount;
	SCD_Struct_GE160* _localizationTable;
	unsigned long long _localizationTableCount;
	NSMutableOrderedSet* _uniqueAttributes;
	NSMutableArray* _uniqueFeatureAttributes;
	SCD_Struct_GE163* _lineCharacteristicPoints;
	unsigned long long _lineCharacteristicPointCount;
	SCD_Struct_GE163* _polygonCharacteristicPoints;
	unsigned long long _polygonCharacteristicPointCount;
	SCD_Struct_GE163* _coastlineCharacteristicPoints;
	unsigned long long _coastlineCharacteristicPointCount;
	SCD_Struct_GE154* _lineStrokeSpecifications;
	unsigned long long _lineStrokeSpecificationCount;
	SCD_Struct_GE154* _polygonStrokeSpecifications;
	unsigned long long _polygonStrokeSpecificationCount;
	unsigned long long _tileReferenceCount;
	GEOTileKey* _tileReferences;
	SCD_Struct_GE164* _transitLines;
	unsigned long long _transitLineCount;
	SCD_Struct_GE165* _transitSystems;
	unsigned long long _transitSystemCount;
	SCD_Struct_GE166* _transitLinks;
	unsigned long long _transitLinkCount;
	SCD_Struct_GE167* _transitLinkLineKeys;
	unsigned long long* _transitLinkLineIndices;
	unsigned long long _transitLinkLineIndicesCount;
	SCD_Struct_GE145* _transitVertices;
	GEOTransitNodeFeature* _transitNodes;
	unsigned long long _transitNodeCount;
	unsigned long long* _transitNodeSystemIndices;
	unsigned long long _transitNodeIndexCount;
	SCD_Struct_GE145* _transitStationTransferVertices;
	SCD_Struct_GE168* _transitStationTransfers;
	unsigned long long _transitStationTransferCount;
	SCD_Struct_GE139* _transitJunctions;
	unsigned long long _transitJunctionCount;
	SCD_Struct_GE154* _transitPointsOnRoad;
	unsigned long long _transitPointsOnRoadCount;
	unsigned* _transitTravelTimes;
	float* _transitLinkLineMinZoomOverrides;
	unsigned long long* _transitNodeParentIDs;
	unsigned long long _transitNodeParentIDCount;
	SCD_Struct_GE144* _transitLinkLabelAnnotations;
	unsigned long long _transitLinkLabelAnnotationCount;
	SCD_Struct_GE145* _transitLinkAnnotationBezierVertices;
	unsigned long long* _idsOfTransitNodesNotInTile;
	SCD_Struct_GE169* _transitAccessPoints;
	unsigned long long _transitAccessPointCount;
	SCD_Struct_GE167* _transitNodeLineKeys;
	unsigned long long* _transitNodeLineIndices;
	unsigned long long _transitNodeLineIndicesCount;
	SCD_Struct_GE167* _transitNodeSubtitleLineKeys;
	unsigned long long* _transitNodeSubtitleLineIndices;
	unsigned long long _transitNodeSubtitleLineIndicesCount;
	unsigned long long* _transitShieldIndices;
	unsigned char* _transitLineDirections;
	unsigned long long* _originalTransitNodeIDs;
	unsigned long long* _originalTransitNodeIDPointers;
	SCD_Struct_GE34* _transitLinkSections;
	char _transitCoverage;
	id* _transitNodeStyleAttributes;
	unsigned long long* _hallOrderIDs;
	BOOL* _shouldDrawEndPoint;
	unsigned long long* _transitNodeCollapseIndices;
	unsigned long long _transitNodeCollapseIndexCount;
	unsigned long long* _transitNodeCollapseIDs;
	unsigned long long _transitNodeCollapseIDCount;
	GEOsslpmTileInfo* _sslpmTileInfo;
	unsigned _tileLabelLinesCount;
	GEOTileLabelLine* _tileLabelLines;
	unsigned _labelLineFeatureSectionsCount;
	GEOLabelLineFeatureSection* _labelLineFeatureSections;
	unsigned _labelLineAttributesCount;
	GEOLabelLineAttribute* _labelLineAttributes;
	unsigned _poiStorefrontBundleIDsCount;
	unsigned long long* _poiStorefrontBundleIDs;
	unsigned _labelSummaryIconsCount;
	SCD_Struct_GE170* _labelSummaryIcons;
	unsigned _debugByteCount;
	NSMutableDictionary* _debugByteCountPerChapter;

}

@property (nonatomic,readonly) SCD_Struct_GE112* buildingFootprints; 
@property (nonatomic,readonly) SCD_Struct_GE112* overlapBuildingFootprints; 
@property (nonatomic,readonly) SCD_Struct_GE151* threeDBuildings; 
@property (nonatomic,readonly) SCD_Struct_GE151* overlapThreeDBuildings; 
@property (nonatomic,readonly) SCD_Struct_GE77* lines;                                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) unsigned long long linesCount;                                         //@synthesize linesCount=_linesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long linesVertexCount;                                   //@synthesize linesVertexCount=_linesVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE144* linesLabelAnnotations;                               //@synthesize linesLabelAnnotations=_linesLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long linesLabelAnnotationCount;                          //@synthesize linesLabelAnnotationCount=_linesLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* linesAnnotationBezierVertices;                       //@synthesize linesAnnotationBezierVertices=_linesAnnotationBezierVertices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE77* coastlines;                                           //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlinesCount;                                    //@synthesize coastlinesCount=_coastlinesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE146* polygons;                                            //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsCount;                                      //@synthesize polygonsCount=_polygonsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonsVertexCount;                                //@synthesize polygonsVertexCount=_polygonsVertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE147* venues;                                              //@synthesize venues=_venues - In the implementation block
@property (nonatomic,readonly) unsigned long long venuesCount;                                        //@synthesize venuesCount=_venuesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE148* venueBuildings;                                      //@synthesize venueBuildings=_venueBuildings - In the implementation block
@property (nonatomic,readonly) unsigned long long venueBuildingsCount;                                //@synthesize venueBuildingsCount=_venueBuildingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* venueVertices;                                       //@synthesize venuesVertices=_venuesVertices - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void** venueBuildingSections;                      //@synthesize venuesSections=_venuesSections - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE149* venueLevels;                                         //@synthesize venueLevels=_venueLevels - In the implementation block
@property (nonatomic,readonly) unsigned long long venueLevelsCount;                                   //@synthesize venueLevelsCount=_venueLevelsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE150* venueComponents;                                     //@synthesize venueComponents=_venueComponents - In the implementation block
@property (nonatomic,readonly) unsigned long long venueComponentsCount;                               //@synthesize venueComponentsCount=_venueComponentsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE112* buildingFootprints;                                  //@synthesize buildingFootprints=_buildingFootprints - In the implementation block
@property (nonatomic,readonly) unsigned long long buildingFootprintsCount; 
@property (nonatomic,readonly) unsigned long long nonOverlappingBuildingFootprintsCount;              //@synthesize buildingFootprintsCount=_buildingFootprintsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBuildingFootprintsCount; 
@property (nonatomic,readonly) unsigned long long nonOverlappingThreeDBuildingsCount;                 //@synthesize threeDBuildingsCount=_threeDBuildingsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalThreeDBuildingsCount; 
@property (nonatomic,readonly) SCD_Struct_GE35* pois;                                                 //@synthesize pois=_pois - In the implementation block
@property (nonatomic,readonly) unsigned long long poisCount;                                          //@synthesize poisCount=_poisCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE152* labelTextPlacements;                                 //@synthesize labelTextPlacements=_labelTextPlacements - In the implementation block
@property (nonatomic,readonly) unsigned labelTextPlacementsCount;                                     //@synthesize labelTextPlacementsCount=_labelTextPlacementsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE153* overpasses;                                          //@synthesize overpasses=_overpasses - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* junctions;                                           //@synthesize junctions=_junctions - In the implementation block
@property (nonatomic,readonly) unsigned long long junctionsCount;                                     //@synthesize junctionsCount=_junctionsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasComputedJunctions;                                             //@synthesize hasComputedJunctions=_hasComputedJunctions - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE155* lineCrossings;                                       //@synthesize lineCrossings=_lineCrossings - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCrossingsCount;                                 //@synthesize lineCrossingsCount=_lineCrossingsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* pointsOnRoad;                                        //@synthesize pointsOnRoad=_pointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long pointsOnRoadCount;                                  //@synthesize pointsOnRoadCount=_pointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* laneConnections;                                     //@synthesize laneConnections=_laneConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long laneConnectionsCount;                               //@synthesize laneConnectionsCount=_laneConnectionsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE163* lineCharacteristicPoints;                            //@synthesize lineCharacteristicPoints=_lineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long lineCharacteristicPointCount;                       //@synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE163* polygonCharacteristicPoints;                         //@synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonCharacteristicPointCount;                    //@synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE163* coastlineCharacteristicPoints;                       //@synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long coastlineCharacteristicPointCount;                  //@synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* lineStrokeSpecifications;                            //@synthesize lineStrokeSpecifications=_lineStrokeSpecifications - In the implementation block
@property (nonatomic,readonly) unsigned long long lineStrokeSpecificationCount;                       //@synthesize lineStrokeSpecificationCount=_lineStrokeSpecificationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* polygonStrokeSpecifications;                         //@synthesize polygonStrokeSpecifications=_polygonStrokeSpecifications - In the implementation block
@property (nonatomic,readonly) unsigned long long polygonStrokeSpecificationCount;                    //@synthesize polygonStrokeSpecificationCount=_polygonStrokeSpecificationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE157* curveLineVertices; 
@property (nonatomic,readonly) SCD_Struct_GE145* lineVertices; 
@property (nonatomic,readonly) GEOTileKey tileKey;                                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long tileReferenceCount;                                 //@synthesize tileReferenceCount=_tileReferenceCount - In the implementation block
@property (nonatomic,readonly) GEOTileKey* tileReferences;                                            //@synthesize tileReferences=_tileReferences - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE164* transitLines;                                        //@synthesize transitLines=_transitLines - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLineCount;                                   //@synthesize transitLineCount=_transitLineCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE165* transitSystems;                                      //@synthesize transitSystems=_transitSystems - In the implementation block
@property (nonatomic,readonly) unsigned long long transitSystemCount;                                 //@synthesize transitSystemCount=_transitSystemCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE166* transitLinks;                                        //@synthesize transitLinks=_transitLinks - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkCount;                                   //@synthesize transitLinkCount=_transitLinkCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitLinkLineIndices;                            //@synthesize transitLinkLineIndices=_transitLinkLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLineIndicesCount;                        //@synthesize transitLinkLineIndicesCount=_transitLinkLineIndicesCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* transitVertices;                                     //@synthesize transitVertices=_transitVertices - In the implementation block
@property (nonatomic,readonly) GEOTransitNodeFeature* transitNodes;                                   //@synthesize transitNodes=_transitNodes - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCount;                                   //@synthesize transitNodeCount=_transitNodeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSystemIndices;                          //@synthesize transitNodeSystemIndices=_transitNodeSystemIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeIndexCount;                              //@synthesize transitNodeIndexCount=_transitNodeIndexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* transitStationTransferVertices;                      //@synthesize transitStationTransferVertices=_transitStationTransferVertices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE168* transitStationTransfers;                             //@synthesize transitStationTransfers=_transitStationTransfers - In the implementation block
@property (nonatomic,readonly) unsigned long long transitStationTransferCount;                        //@synthesize transitStationTransferCount=_transitStationTransferCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE139* transitJunctions;                                    //@synthesize transitJunctions=_transitJunctions - In the implementation block
@property (nonatomic,readonly) unsigned long long transitJunctionCount;                               //@synthesize transitJunctionCount=_transitJunctionCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE154* transitPointsOnRoad;                                 //@synthesize transitPointsOnRoad=_transitPointsOnRoad - In the implementation block
@property (nonatomic,readonly) unsigned long long transitPointsOnRoadCount;                           //@synthesize transitPointsOnRoadCount=_transitPointsOnRoadCount - In the implementation block
@property (nonatomic,readonly) unsigned* transitTravelTimes;                                          //@synthesize transitTravelTimes=_transitTravelTimes - In the implementation block
@property (nonatomic,readonly) float* transitLinkLineMinZoomOverrides;                                //@synthesize transitLinkLineMinZoomOverrides=_transitLinkLineMinZoomOverrides - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE169* transitAccessPoints;                                 //@synthesize transitAccessPoints=_transitAccessPoints - In the implementation block
@property (nonatomic,readonly) unsigned long long transitAccessPointCount;                            //@synthesize transitAccessPointCount=_transitAccessPointCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeLineIndices;                            //@synthesize transitNodeLineIndices=_transitNodeLineIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeSubtitleLineIndices;                    //@synthesize transitNodeSubtitleLineIndices=_transitNodeSubtitleLineIndices - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE144* transitLinkLabelAnnotations;                         //@synthesize transitLinkLabelAnnotations=_transitLinkLabelAnnotations - In the implementation block
@property (nonatomic,readonly) unsigned long long transitLinkLabelAnnotationCount;                    //@synthesize transitLinkLabelAnnotationCount=_transitLinkLabelAnnotationCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE145* transitLinkAnnotationBezierVertices;                 //@synthesize transitLinkAnnotationBezierVertices=_transitLinkAnnotationBezierVertices - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitShieldIndices;                              //@synthesize transitShieldIndices=_transitShieldIndices - In the implementation block
@property (nonatomic,readonly) unsigned char* transitLineDirections;                                  //@synthesize transitLineDirections=_transitLineDirections - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_GE34* transitLinkSections;                            //@synthesize transitLinkSections=_transitLinkSections - In the implementation block
@property (nonatomic,readonly) char transitCoverage;                                                  //@synthesize transitCoverage=_transitCoverage - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIndices;                        //@synthesize transitNodeCollapseIndices=_transitNodeCollapseIndices - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIndexCount;                      //@synthesize transitNodeCollapseIndexCount=_transitNodeCollapseIndexCount - In the implementation block
@property (nonatomic,readonly) unsigned long long* transitNodeCollapseIDs;                            //@synthesize transitNodeCollapseIDs=_transitNodeCollapseIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long transitNodeCollapseIDCount;                         //@synthesize transitNodeCollapseIDCount=_transitNodeCollapseIDCount - In the implementation block
@property (nonatomic,readonly) GEOsslpmTileInfo* sslpmTileInfo;                                       //@synthesize sslpmTileInfo=_sslpmTileInfo - In the implementation block
@property (nonatomic,readonly) unsigned tileLabelLinesCount;                                          //@synthesize tileLabelLinesCount=_tileLabelLinesCount - In the implementation block
@property (nonatomic,readonly) GEOTileLabelLine* tileLabelLines;                                      //@synthesize tileLabelLines=_tileLabelLines - In the implementation block
@property (nonatomic,readonly) unsigned labelLineFeatureSectionsCount;                                //@synthesize labelLineFeatureSectionsCount=_labelLineFeatureSectionsCount - In the implementation block
@property (nonatomic,readonly) GEOLabelLineFeatureSection* labelLineFeatureSections;                  //@synthesize labelLineFeatureSections=_labelLineFeatureSections - In the implementation block
@property (nonatomic,readonly) unsigned labelLineAttributesCount;                                     //@synthesize labelLineAttributesCount=_labelLineAttributesCount - In the implementation block
@property (nonatomic,readonly) GEOLabelLineAttribute* labelLineAttributes;                            //@synthesize labelLineAttributes=_labelLineAttributes - In the implementation block
@property (nonatomic,readonly) unsigned long long* poiStorefrontBundleIDs;                            //@synthesize poiStorefrontBundleIDs=_poiStorefrontBundleIDs - In the implementation block
@property (nonatomic,readonly) unsigned poiStorefrontBundleIDsCount;                                  //@synthesize poiStorefrontBundleIDsCount=_poiStorefrontBundleIDsCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE170* labelSummaryIcons;                                   //@synthesize labelSummaryIcons=_labelSummaryIcons - In the implementation block
@property (nonatomic,readonly) unsigned labelSummaryIconsCount;                                       //@synthesize labelSummaryIconsCount=_labelSummaryIconsCount - In the implementation block
@property (nonatomic,readonly) unsigned debugByteCount;                                               //@synthesize debugByteCount=_debugByteCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * debugByteCountPerChapter;                        //@synthesize debugByteCountPerChapter=_debugByteCountPerChapter - In the implementation block
-(SCD_Struct_GE147*)venues;
-(unsigned long long)venueLevelsCount;
-(unsigned long long)nonOverlappingBuildingFootprintsCount;
-(unsigned long long)polygonsCount;
-(void)forEachJunctionInRoad:(SCD_Struct_GE77*)arg1 visitor:(/*^block*/id)arg2 ;
-(SCD_Struct_GE35*)pois;
-(SCD_Struct_GE77*)lines;
-(SCD_Struct_GE112*)overlapBuildingFootprints;
-(SCD_Struct_GE168*)transitStationTransfers;
-(unsigned long long)coastlinesCount;
-(SCD_Struct_GE150*)venueComponents;
-(unsigned long long)lineStrokeSpecificationCount;
-(unsigned long long)pointsOnRoadCount;
-(unsigned long long)transitAccessPointCount;
-(SCD_Struct_GE165*)transitSystems;
-(unsigned long long)venueComponentsCount;
-(SCD_Struct_GE164*)transitLines;
-(unsigned long long)nonOverlappingThreeDBuildingsCount;
-(SCD_Struct_GE153*)overpasses;
-(unsigned long long)transitLineCount;
-(SCD_Struct_GE164*)transitLineForFeatureID:(unsigned long long)arg1 ;
-(SCD_Struct_GE163*)polygonCharacteristicPoints;
-(GEOTileKey*)tileReferences;
-(unsigned long long)transitLinkCount;
-(void)forEachRoad:(/*^block*/id)arg1 ;
-(SCD_Struct_GE146*)polygons;
-(SCD_Struct_GE165*)transitSystemInfoForFeatureID:(unsigned long long)arg1 ;
-(GEOLabelLineAttribute*)labelLineAttributes;
-(/*function pointer*/void**)venueBuildingSections;
-(NSMutableDictionary *)debugByteCountPerChapter;
-(unsigned long long)buildingFootprintsCount;
-(BOOL)_findOverpasses;
-(void)_trimWhitespace;
-(SCD_Struct_GE34*)polygonLabelPositions;
-(unsigned long long)totalBuildingFootprintsCount;
-(BOOL)_findCrossings;
-(unsigned long long)polygonStrokeSpecificationCount;
-(SCD_Struct_GE152*)labelTextPlacements;
-(void)forEachEdgeOnJunction:(const SCD_Struct_GE139*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long*)transitNodeLineIndices;
-(SCD_Struct_GE144*)linesLabelAnnotations;
-(SCD_Struct_GE149*)venueLevels;
-(unsigned char*)transitLineDirections;
-(char)transitCoverage;
-(SCD_Struct_GE151*)threeDBuildings;
-(SCD_Struct_GE145*)transitStationTransferVertices;
-(const SCD_Struct_GE34*)transitLinkSections;
-(id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(SCD_Struct_GE145*)transitVertices;
-(GEOTileLabelLine*)tileLabelLineforLabelLineID:(unsigned long long)arg1 ;
-(SCD_Struct_GE154*)pointsOnRoad;
-(unsigned long long)laneConnectionsCount;
-(unsigned long long)transitSystemCount;
-(void)_attachRoadPoints;
-(unsigned)labelLineAttributesCount;
-(unsigned long long*)transitNodeSystemIndices;
-(unsigned long long)polygonCharacteristicPointCount;
-(SCD_Struct_GE157*)curveLineVertices;
-(SCD_Struct_GE145*)venueVertices;
-(SCD_Struct_GE163*)lineCharacteristicPoints;
-(unsigned)debugByteCount;
-(SCD_Struct_GE151*)overlapThreeDBuildings;
-(unsigned long long)linesLabelAnnotationCount;
-(GEOTileKey)tileKey;
-(void)forEachTransitLinkOnJunction:(const SCD_Struct_GE139*)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned long long)transitJunctionCount;
-(SCD_Struct_GE112*)buildingFootprints;
-(unsigned long long)transitNodeIndexCount;
-(SCD_Struct_GE154*)lineStrokeSpecifications;
-(unsigned long long)poisCount;
-(unsigned long long)polygonsVertexCount;
-(unsigned long long)lineCharacteristicPointCount;
-(id)description;
-(SCD_Struct_GE139*)junctions;
-(float*)transitLinkLineMinZoomOverrides;
-(void)forEachEdgeInRoad:(SCD_Struct_GE77*)arg1 visitTwice:(BOOL)arg2 visitor:(/*^block*/id)arg3 ;
-(SCD_Struct_GE163*)coastlineCharacteristicPoints;
-(unsigned long long)coastlineCharacteristicPointCount;
-(id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(BOOL)hasComputedJunctions;
-(unsigned)labelLineFeatureSectionsCount;
-(BOOL)isTooBigToParseTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const GEOTileKey*)arg3 ;
-(unsigned long long)transitStationTransferCount;
-(unsigned long long)transitNodeCollapseIDCount;
-(SCD_Struct_GE144*)transitLinkLabelAnnotations;
-(unsigned)labelTextPlacementsCount;
-(SCD_Struct_GE77*)multiSectionFeatureForGeoID:(unsigned long long)arg1 ;
-(unsigned long long)transitLinkLineIndicesCount;
-(SCD_Struct_GE154*)polygonStrokeSpecifications;
-(unsigned long long*)transitShieldIndices;
-(unsigned long long)junctionsCount;
-(SCD_Struct_GE170*)labelSummaryIcons;
-(unsigned long long)linesVertexCount;
-(BOOL)_findJunctions;
-(void)forEachJunction:(/*^block*/id)arg1 ;
-(void)forEachPolygon:(/*^block*/id)arg1 ;
-(SCD_Struct_GE145*)transitLinkAnnotationBezierVertices;
-(unsigned long long*)transitLinkLineIndices;
-(unsigned long long*)transitNodeCollapseIndices;
-(unsigned)labelSummaryIconsCount;
-(SCD_Struct_GE169*)transitAccessPointForFeatureID:(unsigned long long)arg1 ;
-(unsigned long long)tileReferenceCount;
-(SCD_Struct_GE166*)transitLinks;
-(id)extrusionHeightsPool;
-(unsigned long long*)transitNodeCollapseIDs;
-(SCD_Struct_GE154*)transitPointsOnRoad;
-(unsigned*)transitTravelTimes;
-(unsigned long long)lineCrossingsCount;
-(unsigned long long)transitLinkLabelAnnotationCount;
-(unsigned long long*)transitNodeSubtitleLineIndices;
-(unsigned long long)transitPointsOnRoadCount;
-(void)forEachPoint:(/*^block*/id)arg1 ;
-(unsigned long long*)poiStorefrontBundleIDs;
-(GEOTransitNodeFeature*)transitNodeForFeatureID:(unsigned long long)arg1 ;
-(GEOsslpmTileInfo*)sslpmTileInfo;
-(/*function pointer*/void**)sortedPointsOnRoad;
-(id)baseHeightsPool;
-(unsigned long long)venuesCount;
-(unsigned long long)transitNodeCount;
-(SCD_Struct_GE145*)linesAnnotationBezierVertices;
-(GEOLabelLineFeatureSection*)labelLineFeatureSections;
-(SCD_Struct_GE155*)lineCrossings;
-(BOOL)_populateTransitConnectivity;
-(SCD_Struct_GE145*)lineVertices;
-(unsigned long long)transitNodeCollapseIndexCount;
-(unsigned)tileLabelLinesCount;
-(SCD_Struct_GE169*)transitAccessPoints;
-(unsigned)poiStorefrontBundleIDsCount;
-(unsigned long long)linesCount;
-(unsigned long long)venueBuildingsCount;
-(SCD_Struct_GE77*)coastlines;
-(GEOTransitNodeFeature*)transitNodes;
-(void)dealloc;
-(unsigned long long)totalThreeDBuildingsCount;
-(GEOTileLabelLine*)tileLabelLines;
-(SCD_Struct_GE148*)venueBuildings;
-(SCD_Struct_GE154*)laneConnections;
-(SCD_Struct_GE139*)transitJunctions;
@end

